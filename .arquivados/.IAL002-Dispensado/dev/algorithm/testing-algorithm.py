def print_menu():
    print("Escolha o algoritmo que deseja rodar!\n")
    print("1 - Multiplicação de dois números!\n")
    print("2 - Cálculo média de Auno\n")
    print("3 - Cálculo novo salário!\n")
    choice = int(input("\nEscolha entre as opções 1 - 3\n\n"))
    if choice == 1:
        call_multiply()
    elif choice == 2:
        call_media()
    elif choice == 3:
        call_novo_salario()
    else:
        print("\nescolha apenas uma das opções listadas acima \n")
        print_menu()


def encerra():
    print("\n\nDeseja encerrar ou retornar ao menu?\n")
    print("\n1 - Retornar ao menu")
    print("\n2 - Encerrar")
    choice = int(input("\nEscolha entre as opções 0 - 1: "))
    if choice == 1:
        print_menu()
    elif choice == 2:
        print("Algoritmos encerrados")
    else:
        print("Opção inválida. Escopo encerrado!")


def call_multiply():
    print("Algoritmo a:\nMultiplicação entre dois números\n")
    val1 = float(input("\nDigite o valor numérico do primeiro termo: "))
    val2 = float(input("\nDigite o valor numérico do segundo termo: "))

    def mulltiply_num(term1, term2):
        return term1*term2

    obj_mult = mulltiply_num(val1, val2)
    print("Ovalor da multiplicação entre " + str(val1) +
          " e " + str(val2) + " é igual a " + str(obj_mult))

    encerra()


def call_media():
    print("Algoritmo c:\nCálculo média de Aluno\n")
    n1 = float(input("\nDigite o valor numérico para Nota 1 do aluno: "))
    n2 = float(input("\nDigite o valor numérico para Nota 2 do aluno: "))

    def media_calc(score1, score2):
        media_cut = float(6)
        soma_notas = float(score1+score2)
        media_final = float(soma_notas / 2)

        if media_final >= media_cut:
            return print("\nAluno aprovado com média " + str(media_final))
        else:
            return print("\nAluno REPROVADO com média " + str(media_final))

    media_calc(n1, n2)

    encerra()


def call_novo_salario():
    print("Algoritmo d:\nCálculo novo salário")
    s_atual = float(input("\nInforme o salário atual do Funcionário: "))

    def sal_calc(current_sal):
        sal_range = float(500)
        if current_sal <= sal_range:
            return current_sal + current_sal * 0.2
        else:
            return current_sal + current_sal * 0.1

    obj_sal = sal_calc(s_atual)
    print("\nO valor do salário do Funcionário foi atualizado para R$"+str(obj_sal))

    encerra()


print_menu()
