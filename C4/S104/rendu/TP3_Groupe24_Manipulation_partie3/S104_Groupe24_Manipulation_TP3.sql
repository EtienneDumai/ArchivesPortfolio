--JOIN avec multi jointures : 
SELECT CAT.libelle AS categorie, F.libelle AS famille, A.code, A.etat
FROM ARTICLE A
JOIN CATEGORIE CAT ON A.codeCat = CAT.code
JOIN FAMILLE F ON CAT.codeFam = F.code;

--JOIN sans multi jointures : 
SELECT E.nom, E.prenom, M.nom AS nom_magasin
FROM EMPLOYE E
JOIN MAGASIN M ON E.codeMag = M.code;

--ORDER BY avec multi tri : 
SELECT E.codeMag, M.nom AS nom_mag, E.code AS code_employ, E.nom AS nom_employee, COUNT(CON.numero) AS num_contrat
FROM EMPLOYE E
JOIN MAGASIN M ON E.codeMag = M.code
JOIN CONTRAT CON ON E.code = CON.codeEmp
GROUP BY E.codeMag, M.nom, E.code, E.nom
ORDER BY E.codeMag, COUNT(CON.numero) DESC;

--ORDER BY sans multi tri : 
SELECT * FROM FAMILLE ORDER BY libelle;

--GROUP BY (1) : 
SELECT codeFam, COUNT(*) as num_categorie
FROM CATEGORIE
GROUP BY codeFam;

--GROUP BY (2) :
SELECT codeCli, SUM(montantCheqCaut) as montant_total_cheque
FROM CONTRAT
GROUP BY codeCli;

--GROUP BY (3) :
SELECT codeEmp, COUNT(*) as num_contrat
FROM CONTRAT
GROUP BY codeEmp;

--GROUPE BY HAVING (1) :
SELECT codeCat, COUNT(*) AS nombre_articles
FROM ARTICLE
GROUP BY codeCat
HAVING COUNT(*) > 1;

--GROUPE BY HAVING (2) :
SELECT codeFam, AVG(delaiRetour) AS retour_delai
FROM CATEGORIE
GROUP BY codeFam
HAVING AVG(delaiRetour) > 10;  

--GROUPE BY HAVING avec sous requêtes :
SELECT CAT.code, CAT.libelle, COUNT(ART.code) AS num_article
FROM CATEGORIE CAT
JOIN ARTICLE ART ON CAT.code = ART.codeCat
GROUP BY CAT.code, CAT.libelle
HAVING COUNT(ART.code)  IN (SELECT article_count FROM (SELECT COUNT(*) AS article_count FROM ARTICLE GROUP BY codeCat) T);

--Fonction d’agrégation (1) :
SELECT A.codeCat, COUNT(*) AS nombre_articles
FROM ARTICLE A
GROUP BY A.codeCat;

--Fonction d’agrégation (2) :
SELECT codeTypeCli, SUM(montantCheqCaut) AS total_caution, AVG(montantCheqCaut) AS moyenne_caution
FROM CONTRAT CO
JOIN CLIENT CL
ON CL.CODETYPECLI = CO.CODECLI
GROUP BY codeTypeCli;

--Sous requêtes (1) :
SELECT C.code, C.nom, C.prenom, COUNT(CON.numero) AS num_contrat
FROM CLIENT C
JOIN CONTRAT CON ON C.code = CON.codeCli
GROUP BY C.code, C.nom, C.prenom
HAVING COUNT(CON.numero) NOT IN (SELECT COUNT(*) FROM CONTRAT GROUP BY codeCli HAVING COUNT(*) < 1);

--Sous requêtes (2) :
SELECT E.code, E.nom, E.prenom
FROM EMPLOYE E
WHERE E.code IN (
	SELECT CON.codeEmp
	FROM CONTRAT CON
	GROUP BY CON.codeEmp
	HAVING COUNT(*) > 1 );

--Sous requêtes (3) :
SELECT CL.code, CL.nom, CL.prenom
FROM CLIENT CL
WHERE CL.code NOT IN (
	SELECT CON.codeCli
	FROM CONTRAT CON
	JOIN LIGNECONTRAT LC ON CON.numero = LC.numeroCont
	JOIN ARTICLE A ON LC.numeroArticle = A.code
	WHERE A.codeCat IN ('13', '15'));
  
--Sous requêtes (4) :
SELECT CL.code, CL.nom, CL.prenom
FROM CLIENT CL
WHERE CL.code IN (
	SELECT A.codeClient
	FROM ABONNEMENT A
	WHERE A.codeTypeAbont = 2);
  
SELECT CAT.code, CAT.libelle, COUNT(ART.code) AS num_article
FROM CATEGORIE CAT
JOIN ARTICLE ART ON CAT.code = ART.codeCat
GROUP BY CAT.code, CAT.libelle
HAVING COUNT(ART.code)  IN (SELECT nombre_article FROM (SELECT COUNT(*) AS nombre_article FROM ARTICLE GROUP BY codeCat) T);

