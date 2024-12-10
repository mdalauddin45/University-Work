.model small
.stack 100h
.data
.code

main proc
    
    mov ah,2h
    mov dl, 'A'
    int 21h
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main
    