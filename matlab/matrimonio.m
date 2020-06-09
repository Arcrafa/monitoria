clc;

clear;

opcion="s";

while opcion=="s"
    
    nombre= input("ingrese el nombre de la persona a verificar")

    edad=input("ingrese la edad de la persona a verificar")

    soltero=input("ingrese s si la persona es soltera o c si no es soltera")

    if ((edad >18) && (soltero == 's'))

        disp(nombre)

        disp("se puede casar")

    else

        disp(nombre)

        disp("no se puede casar")

    end

    opcion=input("ingrese s si desea realizar otra validacion")

end

disp("programa finalizado")
