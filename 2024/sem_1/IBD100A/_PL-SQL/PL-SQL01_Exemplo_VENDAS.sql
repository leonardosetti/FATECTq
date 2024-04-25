set linesize 1000
set serveroutput on

CREATE OR REPLACE PROCEDURE ALTERA_VALOR_PRECO
AS

 var_prazo_30  integer;
 var_prazo_45  integer;
 var_prazo_60 integer;
BEGIN
  
  select count(*) into var_prazo_30 from VENDAS where PRAZO_DIAS = 30;
  select count(*) into var_prazo_45 from VENDAS where PRAZO_DIAS = 45;
  select count(*) into var_prazo_60 from VENDAS where PRAZO_DIAS = 60;
  
  IF var_prazo_30 > 900 THEN
     BEGIN
	   DBMS_OUTPUT.PUT_LINE ('Prazo 30 dias - aumento de 10%');
	   update VENDAS
	      SET PRECO_VENDA = PRECO_VENDA + (PRECO_VENDA * 0.10);
	 END;
   END IF;
   
   IF var_prazo_45 > 900 THEN
     BEGIN
	   DBMS_OUTPUT.PUT_LINE ('Prazo 45 dias - aumento de 15%');
	   update VENDAS
	      SET PRECO_VENDA = PRECO_VENDA + (PRECO_VENDA * 0.15);
	 END;
   END IF;
   
   
   IF var_prazo_60 > 900 THEN
     BEGIN
	   DBMS_OUTPUT.PUT_LINE ('Prazo 60 dias - aumento de 20%');
	   update VENDAS
	      SET PRECO_VENDA = PRECO_VENDA + (PRECO_VENDA * 0.20);
	 END;
   END IF;
   
   DBMS_OUTPUT.PUT_LINE ('TERMINO DA ROTINA');
   commit;
 END;