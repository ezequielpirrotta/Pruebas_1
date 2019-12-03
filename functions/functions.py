from tkinter import * 
from tkinter import ttk
import tkinter as tk
def iniciarPrograma(i,o):
      i.config(state=tk.NORMAL)
      def multiplicarUltimo(a):
        max=len(a)
        return (a[max-1]*3)
      def nuevaListaPolos(a):
        inicio=a[0]
        fin=a[len(a)-1]
        b=[inicio,fin]
        return b
      def cargarLista(a,e):
        data=0
        data=(e.get())
        while data!=0:
          a.append(data)
          data=(e.get())
        return a
      edades=[]
      edades=cargarLista(edades,i)
      j=0
      while j<(len(edades)):			
        if edades[j]<30:
          o.insert("1.0", "bye\n")
        else:
          o.insert("1.0", "hi\n")
        j+=1
      print(multiplicarUltimo(edades))
      print(nuevaListaPolos(edades))
    
      