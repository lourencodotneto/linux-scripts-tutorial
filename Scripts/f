# script para ilustrar expressões e declarações

if (-e $1) then
 
	echo root   : $1:r
	echo head   : $1:h
	echo tail   : $1:t

	if (-r $1) echo "permissão para leitura"
	if (-w $1) echo "permissão para escrita"
	if (-x $1) echo "permissão para execução"
	if (-d $1) echo "é um directório"
	if (-f $1) echo "é um arquivo comum"
	if (-z $1) echo "tem tamanho zero"
	if (-o $1) echo "pertence a você"
	
else
	echo $1 não existe
endif
