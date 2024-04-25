select to_date(s.VALIDADE_DOCUMENTO, 'dd/mm/yyy') as VALIDADE_DOCUMENTO, s.* from solicitacoes s
where s.VALIDADE_DOCUMENTO between (to_date('01/02/2024','dd/mm/yyyy')) and  (to_date('20/07/2024','dd/mm/yyyy'))
order by s.VALIDADE_DOCUMENTO
;

select v.PRAZO_DIAS from VENDAS v;

select v.PRAZO_DIAS from VENDAS v
GROUP BY v.PRAZO_DIAS
;

select v.PRAZO_DIAS, count(*) as vendas_por_Prazo from VENDAS v
GROUP BY v.PRAZO_DIAS
;

select v.PRAZO_DIAS, sum(v.VOLUME_VENDA ) as vendas_por_Prazo from VENDAS v
GROUP BY v.PRAZO_DIAS
having v.PRAZO_DIAS < 60
;

