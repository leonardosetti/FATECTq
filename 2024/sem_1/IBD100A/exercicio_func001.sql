SELECT
    v.prazo_dias,
    SUM(v.prazo_dias) AS total_por_prazo
FROM
    vendas v
GROUP BY
    v.prazo_dias;

SELECT
    SUM(v.volume_venda) AS tot_volume,
    round(AVG(v.preco_venda),2) AS média_preco,
    MAX(v.prazo_dias) AS max_prazo
FROM
    vendas v;

SELECT
    v.codigo,
    v.data_da_venda,
    v.prazo_dias,
    v.preco_venda,
    v.volume_venda,
    v.codigo_cliente,
    v.codigo_produto,
    v.codigo_cidade,
    v.codigo_vendedor
FROM
    vendas v;

SELECT
    v.prazo_dias
FROM
    vendas v
GROUP BY
    v.prazo_dias;

SELECT
    v.prazo_dias,
    COUNT(*) AS vendas_por_prazo
FROM
    vendas v
GROUP BY
    v.prazo_dias;

SELECT
    *
FROM
    vendedores_ex;

SELECT
    vx.vendedor,
    round(AVG(v.volume_venda),2) AS "Média de Vendas"
FROM
    vendas v
    INNER JOIN vendedores_ex vx ON v.codigo_vendedor = vx.codigo_vendedor
GROUP BY
    vx.vendedor;
    
    