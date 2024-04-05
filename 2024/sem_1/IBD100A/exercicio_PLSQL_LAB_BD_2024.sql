-- desenvolver um PL/SQL pegando o Status da Solicitação, a data e a Razão social dos Registros do 1º semestr de 2024.

--  A saída tem que mostrar as 3 informações da mesma linha.


----- WHILE LOOP --------------------------------------------
set linesize 1000
set serveroutput on

DECLARE
 reg1  number(3,0) := 15;
 v_nome varchar(60);
BEGIN
  WHILE reg1 < 96
  LOOP 
     SELECT NOME_USUARIO into v_nome from USUARIO WHERE CODUSER = reg1;
      DBMS_OUTPUT.PUT_LINE(v_nome);
     reg1 := reg1 + 10;
 END LOOP;
END;
/

set linesize 1000
set serveroutput on

-- DECLARE
Begin 
SELECT SOLICITACOES 