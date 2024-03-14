CREATE TABLE AREA(
AREA_CODIGO   NUMBER(5),
NOME_AREA VARCHAR(60),
TIPO_AREA   VARCHAR(30)
);

CREATE TABLE SETOR(
CODSETOR   NUMBER(3),
DESC_SETOR VARCHAR(60),
AREA_CODIGO    NUMBER(5)
);

CREATE TABLE USUARIO(
CODUSER   NUMBER(5),
NOME_USUARIO VARCHAR(60),
CODSETOR    NUMBER(3)
);

CREATE TABLE TERCEIRIZADO(
COD_TERCEIRO   NUMBER(5),
NOME_COLABORADOR VARCHAR(60),
CODSETOR    NUMBER(3)
);

ALTER TABLE USUARIO
ADD CONSTRAINT PK_USER_CODUSER
PRIMARY KEY (CODUSER);

ALTER TABLE SETOR
ADD CONSTRAINT PK_SETOR_CODSETOR
PRIMARY KEY (CODSETOR);

ALTER TABLE AREA
ADD CONSTRAINT PK_AREA_AREACOD
PRIMARY KEY (AREA_CODIGO);

ALTER TABLE TERCEIRIZADO
ADD CONSTRAINT PK_COD_TERCEIRO
PRIMARY KEY (COD_TERCEIRO);

ALTER TABLE SETOR
ADD CONSTRAINT FK_AREA_SETOR
FOREIGN KEY (AREA_CODIGO)
REFERENCES AREA(AREA_CODIGO);