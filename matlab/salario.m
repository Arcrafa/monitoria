clc;

clear;

while 1
    
    identificacion = input("ingrese la identificacion de la persona para evaluar salario o ingrese 00000 para salir")
    
    if (identificacion=="00000")
       
        disp("a ingresado 00000 para terminar validaciones")
       
        break
    
    end
    
    salario= input("ingrese el salario de la persona")
    
    if (salario >3000000)
    
        disp(identificacion)
    
        disp("su trabajo es bien pago")
    
    else
    
        disp(identificacion)
    
        disp("su trabajo no es bien pago")
    
    end
    
end

disp("programa finalizado")