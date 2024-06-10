INSERT INTO agencia
    SELECT
        *
    FROM
        reclamacoes.agencia;

INSERT INTO municipios
    SELECT
        *
    FROM
        reclamacoes.municipios;

INSERT INTO incomodos
    SELECT
        *
    FROM
        reclamacoes.incomodos;

INSERT INTO empresas
    SELECT
        *
    FROM
        reclamacoes.empresas;

INSERT INTO reclamacoes
    SELECT
        *
    FROM
        reclamacoes.reclamacoes;

INSERT INTO reclamantes
    SELECT
        *
    FROM
        reclamacoes.reclamantes;

SELECT DISTINCT
    m.codigodaagencia
FROM
    municipios m
WHERE
    NOT EXISTS (
        SELECT
            1
        FROM
            agencia a
        WHERE
            m.codigodaagencia = a.codigodaagencia
    );

UPDATE MUNICIPIOS
    SET
        CODIGODAAGENCIA = 99
WHERE CODIGODAAGENCIA in 
 ( SELECT DISTINCT
    M.CODIGODAAGENCIA
                         FROM
    MUNICIPIOS M
                         WHERE
    NOT EXISTS (
        SELECT
            1
        FROM
            AGENCIA A
        WHERE
            M.CODIGODAAGENCIA= A.CODIGODAAGENCIA
    )
);
 
 
 select * from AGENCIA;
 
 insert into AGENCIA values (99,'agencia_test', 'AGTST');
 
 SELECT * FROM MUNICIPIOS;
 
 alter table
    municipios add constraint fk_municip_agencia foreign key(CODIGODAAGENCIA)
        references agencia(codigodaagencia);