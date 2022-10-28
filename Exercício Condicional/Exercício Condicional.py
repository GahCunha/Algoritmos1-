import math


print("DEPOSITO-DE-CONTAINER")


deposito_x=float(input("Digite o comprimento do deposito em metros: "))
deposito_y=float(input("Digite a largura do deposito em metros: "))

container_x=float(input("Digite o comprimento do container em metros: "))
container_y=float(input("Digite o largura do container em metros: "))
pilha=int(input("Digite o numero máximo de containers que podem ser empilhados: "))

eixoX = math.floor(deposito_x / container_x) * math.floor(deposito_y / container_y) * pilha
eixoY = math.floor(deposito_x / container_y) * math.floor(deposito_y / container_x) * pilha

eixoX=int(eixoX) 
eixoY=int(eixoY)

if(eixoX>eixoY):
    print("A melhor forma de distribuir os containers é: comprimento do container paralelo ao comprimento do deposito.")
    print(f"Ao todo cabem {eixoX} containers.")
elif(eixoX<eixoY):
    print("A melhor forma de distribuir os containers é: largura do container paralelo ao comprimento do deposito.")
    print(f"Ao todo cabem {eixoY} containers.")
elif(eixoX==eixoY and eixoX!=0):
    print("Ambas distribuições possuem o máximo aproveitamento de espaço.")
    print(f"Ao todo cabem {eixoX} containers.")
else:   #(eixoX == 0 and eixoY == 0)
    print("O deposito não consegue armazenar nenhum container.")