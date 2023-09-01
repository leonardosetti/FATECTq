#!/bin/bash

# Defina o padrão de URL com as partes fixas e variáveis
URL_BASE="https://sorema.com.br/wp-content/uploads/2021/03/"
SIZE_LIMIT=88  # Limite de tamanho em KB

# Loop para baixar os arquivos de 2015 a 2022
for ((year = 2015; year <= 2022; year++))
do
    # Loop para baixar arquivos de 01 a 12 para cada ano
    for ((month = 1; month <= 12; month++))
    do
        # Formate o mês com dois dígitos
        month_padded=$(printf "%02d" $month)
        
        # Concatene o ano, mês e a extensão do arquivo ao URL_BASE
        if ((year >= 2020 && month >= 8))  # A partir de agosto de 2020
        then
            URL="${URL_BASE}${year}-${month_padded}.pdf"
        else
            URL="https://sorema.com.br/wp-content/uploads/2020/12/${year}-${month_padded}.pdf"
        fi
        
        # Verifica se a URL existe
        if curl --head --silent --fail "$URL" > /dev/null; then
            # Extrai o nome do arquivo do URL
            FILENAME="sorema_doar_${year}-${month_padded}.pdf"
            
            # Faz o download do arquivo usando o comando curl
            curl --fail --retry 3 -o "$FILENAME" "$URL"
            
            # Verifica o tamanho do arquivo baixado
            size=$(curl -sI "$URL" | grep -i Content-Length | awk '{print $2}')
            if [[ $size -gt $((SIZE_LIMIT * 1024)) ]]; then
                echo "Download bem-sucedido: $FILENAME"
            else
                echo "Tamanho do arquivo insuficiente: $FILENAME"
                rm "$FILENAME"  # Remove o arquivo com tamanho insuficiente
            fi
        else
            echo "A URL não existe: $URL"
        fi
    done
done

