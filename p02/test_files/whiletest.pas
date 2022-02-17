program whiletest;
  var A:array[0..9] of integer;
  var i:integer;
begin{whiletest}
  i:=0;
  while i<=9 do 
  begin{while}
    A[i]:=i*i;
    i:=i+1
  end{while};
  i:=9;
  while i>=0 do
  begin{while}
    writeln;
    write('A['); write(i); write(']='); write(A[i]);
    i:=i-1
  end{while};
  writeln
end{whiletest}.

