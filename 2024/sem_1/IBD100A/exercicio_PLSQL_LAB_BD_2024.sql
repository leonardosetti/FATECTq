-- desenvolver um PL/SQL pegando o Status da Solicita��o, a data e a Raz�o social dos Registros do 1� semestr de 2024.

--  A sa�da tem que mostrar as 3 informa��es da mesma linha.


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