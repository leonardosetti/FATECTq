/* Exercício de fixação SQL */

-- 1- Selecione todas as vendas com prazo de dias igual a 60 e código da cidade 2
select v.* from vendas v
where v.PRAZO_DIAS =60
and v.CODIGO_CIDADE =2;

-- 2- Selecione todas as vendas com volume de vendas menor ou igual a 900
select v.* from vendas v
where v.VOLUME_VENDA <= 900
ORDER BY v.VOLUME_VENDA desc;

-- 3- Selecione todas as vendas do vendedor 3 que não foram feitas na cidade com código 1
select v.* from vendas v
where v.CODIGO_VENDEDOR =3
and v.CODIGO_cidade not in (1)
order by v.CODIGO_CIDADE;

-- 4- Selecione todas as vendas com prazo de dias igual a 60 e código do produto diferente de 2
select v.* from vendas v
where v.PRAZO_DIAS =60
and v.CODIGO_PRODUTO not in (2)
order by v.CODIGO_PRODUTO;

--5- Selecione todas as vendas com volume de venda maior que 3000 na cidade com código 3 e que não seja do vendedor 4 
select v.* from vendas v
where v.VOLUME_VENDA >3000
and v.CODIGO_cidade in (2)
and v.CODIGO_VENDEDOR != 4
order by v.CODIGO_PRODUTO;

-- 6- Selecione todas as vendas com volume de venda entre 900 e 1550 

select v.* from vendas v
where v.VOLUME_VENDA between 900 and 1500
order by v.CODIGO_PRODUTO;

-- 7- Selecione todas as vendas com volume de venda entre 2000 e 4000 ordenado pela cidade da venda e pelo prazo da venda
select v.* from vendas v
where v.VOLUME_VENDA between 2000 and 4000
order by v.CODIGO_CIDADE desc, v.PRAZO_DIAS asc;

-- 8- Selecione todas as vendas ordenado do maior volume de venda para o menor volume
select v.* from vendas v
order by v.VOLUME_VENDA desc;

-- 9- Selecione somente os 10 maiores registros com maior volume de venda
select * from ( 
  select * from vendas v
  order by v.VOLUME_VENDA desc
  )
where rownum <=10;


-- 10- Selecione somente os 10 maiores registros com maior preço total de venda
select * from ( 
  select * from vendas v
  order by v.PRECO_VENDA desc
  )
where rownum <=10;


UPDATE VENDAS 
SET PRAZO_DIAS = 90
WHERE CODIGO_PRODUTO = 6 AND VOLUME_VENDA > 4000;

SELECT COUNT (*) FROM VENDAS WHERE CODIGO_PRODUTO = 3
AND VOLUME_VENDA > 2000 AND CODIGO_CIDADE = 3;





