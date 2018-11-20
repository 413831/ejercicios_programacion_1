#include "../inc/LinkedList.h"
#ifndef people_H_INCLUDED
#define people_H_INCLUDED
typedef struct
{
    int id;
    char firstName[128];
    char lastName[128];
    int sueldo;
    //
    int isEmpty;
}People;

typedef int (*function_type)(void* thisA,void* thisB);
typedef int (*criterio_type)(void* this);

People* people_new();
People* people_newConParametros(char* id,char* nombre,char* apellido,char* isEmpty,char* sueldo);
People* people_getById(void* pArrayListPeople,int idIngresado);
int people_add(void* pArrayListPeople);
int people_remove(void* pLinkedList,void* pListInactives);
int people_delete(People* this);
int people_copy(People* thisA,People* thisB);
int people_replace(LinkedList* pLinkedList,void* auxElement,int index);
int people_insert(LinkedList* pListActives,LinkedList* pListInactives);
int people_edit(void* pArrayListPeople);
int people_modify(People* this,
                        char* mensaje,
                        int (*validacion)(char*),
                        int (*set)(People*,char*));
int people_show(void* this);
int people_sort(void* pArrayListPeople);
void* people_ordenCriterio();
int people_generarLista(LinkedList* pLinkedList,LinkedList* listaPrincipal[],int* index);
void* people_selectorCriterio();
int people_borrarLista(LinkedList* pLinkedList[]);
int people_hardcode(void* pLinkedList,char *bufferName,char* bufferLastName,char* bufferSueldo);

int people_setId(People* this,char* id);
int people_getId(People* this,int* id);

int people_setNombre(People* this,char* nombre);
int people_getNombre(People* this,char* nombre);

int people_setApellido(People* this,char* apellido);
int people_getApellido(People* this,char* apellido);

int people_setIsEmpty(People* this,char* isEmpty);
int people_getIsEmpty(People* this,int* isEmpty);

int people_setSueldo(People* this,char* sueldo);
int people_getSueldo(People* this,float* sueldo);

int people_setAll(People* this,char* id,char* name,char* lastName,char* salary,char* isEmpty);
int people_getAll(People* this,char* id,char* name,char* lastName,char* salary,char* isEmpty);


#endif // people_H_INCLUDED
