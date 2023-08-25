def call_media():
    print ("em construção Média Aluno")
    print ("Algoritmo c:\nCálculo média de Aluno")
    n1 = float(input("Digite o valor numérico para Nota 1 do aluno: "))
    n2 = float(input("Digite o valor numérico para Nota 2 do aluno: "))
    
    

    def media_calc(score1,score2):
        media_cut = float(6)
        soma_notas = float(score1+score2)
        media_final = float(soma_notas / 2)

        if media_final >= media_cut:
            return print ("Aluno aprovado com média " + str(media_final))
        else:
            return print ("Aluno reprovado com média " + str(media_final))
    
    obj_media = media_calc(n1,n2) 
    print(obj_media)       

call_media()