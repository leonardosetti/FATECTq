--selecione os terceirizados que n�o est�o no setor 300

select * from TERCEIRIZADO t where
t.CODSETOR != 300;

--selecione os terceirizados que n�o est�o em setor algum
select t.CODSETOR,  t.NOME_COLABORADOR as "Ot�rio Precarizado" from TERCEIRIZADO t where
t.CODSETOR is null;


select t.NOME_COLABORADOR, S.DESC_SETOR from TERCEIRIZADO t inner join setor s on  t.codsetor in s.codsetor;

select t.NOME_COLABORADOR, S.DESC_SETOR from TERCEIRIZADO t left join setor s on  t.codsetor in s.codsetor
order by t.NOME_COLABORADOR desc
;

select t.NOME_COLABORADOR, S.DESC_SETOR from TERCEIRIZADO t right join setor s on  t.codsetor in s.codsetor
order by t.NOME_COLABORADOR desc
;

select t.NOME_COLABORADOR, S.DESC_SETOR from TERCEIRIZADO t full OUTER join setor s on  t.codsetor in s.codsetor
order by t.NOME_COLABORADOR, s.DESC_SETOR desc
;

-- traga o nome de todas as areas e o nome do setor mesmo que n�o tenha nenhum setor associado

-- com left join
select a.NOME_AREA, s.desc_setor from AREA A left join Setor S on a.AREA_CODIGO = s.AREA_CODIGO;

-- com right join
select a.NOME_AREA, s.desc_setor from SETOR S right join AREA A on a.AREA_CODIGO = s.AREA_CODIGO;

-- com full outer join
select a.NOME_AREA, s.desc_setor from AREA A full outer join Setor S on a.AREA_CODIGO = s.AREA_CODIGO;



