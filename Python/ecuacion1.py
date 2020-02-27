#En este programa le pedimoss al usuario
#que teclee los coeficientes de un polinomio
#y hallamos el valor de las raices
def ecuacion():
    print "introduzca los coeficientes de el polinomio"
    print "A*x^2+B*x+C"
    a=input("A= ")
    b=input("B= ")
    c=input("C= ")
    raiz1=(-b+math.sqrt(b*b-4*a*c))/(2*a)
    raiz2=(-b-math.sqrt(b*b-4*a*c))/(2*a)
    print "primera solucion= " + raiz1
    print "segunda solucion= " + raiz2

ecuacion()

	