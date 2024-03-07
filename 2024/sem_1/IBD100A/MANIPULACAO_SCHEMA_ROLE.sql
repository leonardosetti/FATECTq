/*
Esquema (Schema) é uma coleção de objetos de banco de dados (Tabelas, Índices, Views, Procedures, etc), o qual prtence 
a um usuário com o mesmo nome (Owner)

Privilégio de objeto: permissão para manipulação de outros esquemas:
GRANT SELECT, UPDATE, INSERT, DELET ON SCHEMA_NAME.OBJECT
*/

Select * from area;

GRANT SELECT, UPDATE, INSERT, DELETE on AREA to LUCCA_0220482312038;

GRANT SELECT, UPDATE, INSERT, DELETE on SETOR to LUCCA_0220482312038;



select * from USUARIO;

select * from TERCEIRIZADO;

select * from SETOR; 

ALTER TABLE USUARIO 
ADD CONSTRAINT FK_USUARIO_SETOR
FOREIGN KEY (CODSETOR)
REFERENCES SETOR(CODSETOR);

ALTER TABLE TERCEIRIZADO
ADD CONSTRAINT FK_TERCEIRIZADO_SETOR
FOREIGN KEY (CODSETOR)
REFERENCES  SETOR(CODSETOR);

ALTER TABLE SETOR  
ADD CONSTRAINT FK_SETOR_AREA
FOREIGN KEY (AREA_CODIGO)
REFERENCES AREA(AREA_CODIGO);

select * from user_tables;
select * from all_tables;
