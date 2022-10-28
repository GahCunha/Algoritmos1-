opcao=0

while opcao!=3:

    print("MENU INICIAL")
    print("[1]IMCF")
    print("[2]PGCF")
    print("[3]SAIR DO PROGRAMA")
    opcao=int(input("INSIRA A OPÇÃO DESEJADA:"))
    
    
    if opcao == 1:
        print("IMCF")

        massa = float(input("Digite a massa do felino: "))
        comprimento_coluna =float(input("Digite o comprimento da coluna:"))

        imcf=massa/(comprimento_coluna * comprimento_coluna)
        print(f"O IMCF do gato é{imcf:.2f}.")

        if(imcf<8):
            print("O felino esta abaixo do peso.")
        elif(imcf>=8 and imcf<12):
            print("O felino esta no peso ideal.")
        else:
            print("O felino esta acima do peso.")

    elif opcao == 2:
        print("PGCF")

        ct=float(input("Digite a circunferência tóracica em cm:"))
        dcp=float(input("Digite a distância entre o calcâneo e a patela em cm:"))

        pgcf=(((ct/0.7067)-dcp)/0.9156)-dcp
        print(f"O percentual de gordura corporal felina é {pgcf:.2f}%")

        if(pgcf<20):
            print("O felino esta abaixo do peso.")
        elif(pgcf>=20 and pgcf<27):
            print("O felino esta no peso ideal.")
        else:
            print("O felino esta acima do peso.")

    elif opcao == 3:
        print("Programa encerrado.")
        
    else:
        print("ERRO! Digite um valor valido!")
