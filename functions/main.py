

from tkinter import * 
from tkinter import ttk
import tkinter as tk
from functions import *

class Aplicacion():
  def __init__(self):
    self.raiz=tk.Tk()
    self.raiz.geometry('700x500')
    self.raiz.configure(bg = 'yellow')
    self.raiz.title('Aplicacion')
    ttk.Button(self.raiz, text='Salir', command=self.raiz.destroy).pack(side=BOTTOM)
    self.raiz.resizable(width=False,height=False)
    ttk.Button(self.raiz, text='cosas').pack(side=LEFT) 
    
    # Define el widget Text 'self.tinfo ' en el que se
    # pueden introducir varias líneas de texto:
    
    self.tinfo = Text(self.raiz, width=40, height=10)
    
    # Sitúa la caja de texto 'self.tinfo' en la parte
    # superior de la ventana 'self.raiz':
    entrada=ttk.Entry(self.raiz, justify=tk.LEFT, state=DISABLED)
    entrada.pack(side=RIGHT)
    self.tinfo.pack(side=TOP)
   
    self.tinfo.focus_set()
    ttk.Button(command=iniciarPrograma(entrada,self.tinfo))
    self.raiz.mainloop()
    
    
def main():
  mi_app = Aplicacion().__init__()
  return 0

if __name__ == '__main__':
  main()