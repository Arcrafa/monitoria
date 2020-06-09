clc;

clear;

opcion="s";

while opcion=="s"
    
    nombre= input("ingrese el nombre del cliente")
    
    tipoCable=input("ingrese el tipo de cable a o b")
    
    metros=input("ingrese el numero de metros que desea el cliente")
    
    if(tipoCable=="a")
        
        costoneto=metros*200;
        
    elseif (tipoCable=="b")
        
        costoneto=metros*300;
        
    else
        
        disp("tipo de cable ingresado no valido intente de nuevo")
        
        break
        
    end
    
    if (metros>100)

        costoneto=(costoneto-(costoneto*0.10));  

    end
    
    disp("el costo del cable a comprar por:")

    disp(nombre)

    disp("es")

    disp(costoneto)
    
    opcion=input("ingrese s si desea calcular otra compra")

end

disp("programa finalizado")