select * from ALUNOGERAL_01.EMPREGADO_REGIONAL;
 
select * from ALUNOGERAL_01.USUARIO_AREA1;
 
select * from ALUNOGERAL_01.USUARIO_AREA2;
 
create table EMPREGADO_REGIONAL as select * from ALUNOGERAL_01.EMPREGADO_REGIONAL;
 
create table usuario_area1 as select * from ALUNOGERAL_01.USUARIO_AREA1;
 
create table usuario_area2 as select * from ALUNOGERAL_01.USUARIO_AREA2;
 
select * from user_tables;
 
select * from EMPREGADO_REGIONAL;
 
select EMPREGADO from EMPREGADO_REGIONAL
    where empregado not like '%SILVA';
    select EMPREGADO from EMPREGADO_REGIONAL
    where empregado like '%SILVA';
select * from ALUNOGERAL_01.USUARIO_AREA1   ---- TRAZ DUPLICADAS
UNION ALL
    select * from ALUNOGERAL_01.USUARIO_AREA2;
    select * from ALUNOGERAL_01.USUARIO_AREA1   ---- NÃO TRAZ DUPLICDADAS
UNION 
    select * from ALUNOGERAL_01.USUARIO_AREA2;
---- DIFERENÇA
 
select * from ALUNOGERAL_01.USUARIO_AREA1 
MINUS
    select * from ALUNOGERAL_01.USUARIO_AREA2;
---- INTERSECÇÃO (EM COMUM)
 
select * from ALUNOGERAL_01.USUARIO_AREA1
INTERSECT   
    select * from ALUNOGERAL_01.USUARIO_AREA2;
commit;
