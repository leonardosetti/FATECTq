--- Cria tabela de Auditoria ----------

create table auditoria (
    empno   NUMBER NOT NULL,
	data_auditoria date NOT NULL,
    ename   VARCHAR2(10) NOT NULL,
	job	VARCHAR2(30),
	salario_velho  NUMBER(10,2) ,
	salario_novo   NUMBER(10,2) ,
	deptno	NUMBER(2)  
   	);
