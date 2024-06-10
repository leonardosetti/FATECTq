---- PL/SQL 01

set linesize 1000
set serveroutput on

DECLARE
  c INTEGER;
BEGIN
  c:=1;
  
  if(c mod 2 = 0) then --par
    DBMS_OUTPUT.PUT_LINE('par');
  else -- IMPAR
    DBMS_OUTPUT.PUT_LINE('ímpar');
  end if; 
  
END;
/

---- PL/SQL 02
set linesize 1000
set serveroutput on

DECLARE
BEGIN
  FOR I IN 1..10 LOOP
      DBMS_OUTPUT.PUT_LINE (I);
  END LOOP;
END;
/

---- PL/SQL 03
declare
i int := 0;
 d  date;
begin
   for i in 1..10 loop
      select sysdate into d from dual;
      dbms_output.put_line(to_char(d));
    end loop;
end;


---------------------

set linesize 1000
set serveroutput on

declare
i int := 0;
 d  date;
begin
for LeTab in 
( select distinct table_name from user_tables ) 
loop
  select sysdate into d from dual;
  dbms_output.put_line(to_char(d));
  dbms_output.put_line(LeTab.table_name);
end loop;
end;
/

