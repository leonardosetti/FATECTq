---- FOR LOOP --------------------------------
set linesize 1000
set serveroutput on

declare
i int := 0;
reg1  number(3,0) := 15;
v_nome varchar(60);
begin
   for i in 1..9 loop
     SELECT NOME_USUARIO into v_nome from USUARIO WHERE CODUSER = reg1;
      DBMS_OUTPUT.PUT_LINE(v_nome);
      reg1 := reg1 + 10;
    end loop;
end;
/


----- REPEAT UNTIL LOOP -------
set linesize 1000
set serveroutput on

DECLARE
 reg1  number(3,0) := 15;
 v_nome varchar(60);
BEGIN
  LOOP 
     SELECT NOME_USUARIO into v_nome from USUARIO WHERE CODUSER = reg1;
      DBMS_OUTPUT.PUT_LINE(v_nome);
     reg1 := reg1 + 10;
     EXIT WHEN reg1 = 95;
 END LOOP;
END;
/

----- LOOP  EXIT --------------------------------------------
set linesize 1000
set serveroutput on

DECLARE
  reg1  number(3,0) := 5;
  v_nome varchar(60);
BEGIN
   LOOP
      reg1 := reg1 + 10;
	  IF reg1 > 95 THEN
	     exit;
	  END IF;
      SELECT NOME_USUARIO into v_nome from USUARIO WHERE CODUSER = reg1;
      DBMS_OUTPUT.PUT_LINE(v_nome);
 END LOOP;
END;
/

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

----------------
