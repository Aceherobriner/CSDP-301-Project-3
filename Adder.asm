;Name: Israel Showell
;Date Created: 10/28/2022
;Project Name: Assembly Adder Function
;Project Desc: This program asks the user to input 3 integer values, and then it 
;will add them together using an assembly function, and a C++ function.
;This file contains the Assembly code.




.386
.model flat, C


.code 
AdderAsm	PROC
			push ebp
			mov ebp, esp

			mov eax, [ebp + 8]
			mov ebx, [ebp + 12]
			mov ecx, [ebp + 16]

			add eax, ebx
			add eax, ecx
			pop ebp
			ret

AdderAsm	endp
end
