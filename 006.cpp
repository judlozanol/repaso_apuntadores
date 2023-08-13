#include <iostream>
using namespace std;
struct Alumno {
    string nombre;
    int notas[3];
};
struct Grupos{
    Alumno alumnos[3];
};

int main(){
    Grupos Estudiantes;
    Estudiantes.alumnos[0].nombre= "Juan";
    Estudiantes.alumnos[0].notas[0]=50;
    Estudiantes.alumnos[0].notas[1]=40;
    Estudiantes.alumnos[0].notas[2]=23;

    Estudiantes.alumnos[1].nombre="Ana";
    Estudiantes.alumnos[1].notas[0]=30;
    Estudiantes.alumnos[1].notas[1]=40;
    Estudiantes.alumnos[1].notas[2]=45;

    Estudiantes.alumnos[2].nombre="David";
    Estudiantes.alumnos[2].notas[0]=40;
    Estudiantes.alumnos[2].notas[1]=35;
    Estudiantes.alumnos[2].notas[2]=40;

    Grupos* ptr = &Estudiantes;
    for( int i=0; i<=2;i++){
        cout<<"Datos del estudiante "<< i+1<<endl;
        cout<<"Nombre: "<<ptr->alumnos[i].nombre<<endl;
        cout<<"Notas del estudiante:";
        for( int j=0; j<=2;j++){
            cout<<ptr->alumnos[i].notas[j]<< "\t";
        }
        cout<<endl<<endl;
    }
}

