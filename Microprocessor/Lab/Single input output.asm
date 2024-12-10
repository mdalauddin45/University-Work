.model small
.stack 100h
.data
.code 
main proc
    mov ah,1 ;take input
    int 21h
       
    mov bl,al
    
    ;new line code
    mov ah,2
    mov dl,0DH
    int 21h
    mov dl,0AH
    int 21h
               
    mov ah,2 ;show output
    mov dl,bl 
    int 21h
   
    
    exit:
    mov ah, 4ch
    int 21h
    main endp
end main