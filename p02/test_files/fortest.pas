program fortest;
  var A:array[0..9] of integer;
  var i:integer;
begin{fortest}
  for i:=0 to 9 do A[i]:=i*i;
  for i:=9 downto 0 do 
  begin{for}
    writeln;
    write('A['); write(i); write(']='); write(A[i])
  end{for};
  writeln
end{fortest}.

