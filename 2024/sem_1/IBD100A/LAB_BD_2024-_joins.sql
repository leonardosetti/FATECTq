--SELECIONE OS TERCEIRIZADOS QUE N�O EST�O NO SETOR 300

SELECT * FROM TERCEIRIZADO T WHERE
T.CODSETOR != 300;

--SELECIONE OS TERCEIRIZADOS QUE N�O EST�O EM SETOR ALGUM
SELECT T.CODSETOR,  T.NOME_COLABORADOR AS "OT�RIO PRECARIZADO" FROM TERCEIRIZADO T WHERE
T.CODSETOR IS NULL;


SELECT T.NOME_COLABORADOR, S.DESC_SETOR FROM TERCEIRIZADO T INNER JOIN SETOR S ON  T.CODSETOR IN S.CODSETOR;

SELECT T.NOME_COLABORADOR, S.DESC_SETOR FROM TERCEIRIZADO T LEFT JOIN SETOR S ON  T.CODSETOR IN S.CODSETOR
ORDER BY T.NOME_COLABORADOR DESC
;

SELECT T.NOME_COLABORADOR, S.DESC_SETOR FROM TERCEIRIZADO T RIGHT JOIN SETOR S ON  T.CODSETOR IN S.CODSETOR
ORDER BY T.NOME_COLABORADOR DESC
;

SELECT T.NOME_COLABORADOR, S.DESC_SETOR FROM TERCEIRIZADO T FULL OUTER JOIN SETOR S ON  T.CODSETOR IN S.CODSETOR
ORDER BY T.NOME_COLABORADOR, S.DESC_SETOR DESC
;

-- TRAGA O NOME DE TODAS AS AREAS E O NOME DO SETOR MESMO QUE N�O TENHA NENHUM SETOR ASSOCIADO

-- COM LEFT JOIN
SELECT A.NOME_AREA, S.DESC_SETOR FROM AREA A LEFT JOIN SETOR S ON A.AREA_CODIGO = S.AREA_CODIGO;

-- COM RIGHT JOIN
SELECT A.NOME_AREA, S.DESC_SETOR FROM SETOR S RIGHT JOIN AREA A ON A.AREA_CODIGO = S.AREA_CODIGO;

-- COM FULL OUTER JOIN
SELECT A.NOME_AREA, S.DESC_SETOR FROM AREA A FULL OUTER JOIN SETOR S ON A.AREA_CODIGO = S.AREA_CODIGO;

-- TRAGA OS TERCEIRIZADOS (COD E NOME) QUE EST�O NA AREA DE INVESTIMENTOS

SELECT T.COD_TERCEIRO, T.NOME_COLABORADOR FROM TERCEIRIZADO T 
	INNER JOIN SETOR S ON T.CODSETOR = S.CODSETOR 
	INNER JOIN AREA A ON S.AREA_CODIGO = A.AREA_CODIGO
		WHERE A.NOME_AREA = 'INVESTIMENTOS'
ORDER BY T.COD_TERCEIRO ASC;

-- SELECIONE TODAS AS VENDAS ONDE O VOLUME SEJA ENTRE 300 E 900 DO VENDEDOR 1

SELECT * FROM VENDAS V 
WHERE V.CODIGO_VENDEDOR = 1 AND
V.VOLUME_VENDA BETWEEN 300 AND 900
;

-- SELECIONE TODAS AS VENDAS ONDE O PRAZO MAIOR QUE 30 NA CIDADE COM C�DIGO 2
-- SELECIONE TODOS OS CODIGOS DA VENDA A DATA DA VENDA E O TOTAL VENDIDO DE CADA VENDA DA CIDADE COM CODIGO 3
-- SELECIONE TODAS AS  VENDAS QUE O VOLUME SEJA MENOR QUE 200 DO ANO DE 2011

SELECT * FROM VENDAS V 
WHERE V.PRAZO_DIAS > 30
AND V.CODIGO_CIDADE = 2;

/*
SELECT
    V.CODIGO,
    V.DATA_DA_VENDA,
    ( COUNT(V.DATA_DA_VENDA) * V.PRECO_VENDA ) AS TOTAL_DIA
FROM
    VENDAS V
WHERE
    V.CODIGO_CIDADE = 3;
*/

SELECT V.CODIGO, V.DATA_DA_VENDA, V.VOLUME_VENDA * V.PRECO_VENDA AS TOTAL_DIA  FROM VENDAS V
WHERE V.CODIGO_CIDADE = 3;


SELECT * FROM VENDAS WHERE VOLUME_VENDA < 200 AND DATA_DA_VENDA LIKE '%2011';