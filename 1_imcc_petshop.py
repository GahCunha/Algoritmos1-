peso = float (input ("Digite o peso do cachorro em (kg):\n"))
altura = float (input ("Digite a altura do cachorro em (m),\nmedindo da nuca, ao longo da coluna, até a ponta do pé da pata traseira do cachorro:\n"))
imcc = peso / altura**2 
quantidade_racao = (15 * peso) * (22 / imcc)
print(f"O imcc do cachorro e {imcc:.2f} (kg/m²).\nA quantidade de racao recomendada e {quantidade_racao:.2f} (g/dia).")
