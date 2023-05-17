int NUM;
    NUM = 1;
    Pacientes pacientes[NUM];
    Ventas venta;
    baseDatosPacientes(pacientes,NUM);
    Ventas venta1 {pacientes[0],pacientes[0].getNumeroDosis()};
    venta1.imprimeVenta();
    return 0;