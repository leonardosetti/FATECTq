SELECT NOME_AREA, NOME_USUARIO, DESC_SETOR FROM SETOR S 
JOIN AREA A ON A.AREA_CODIGO IN S.AREA_CODIGO
LEFT JOIN USUARIO U ON U.CODSETOR  IN S.CODSETOR;