program repeattest;
  var A:array[0..9] of integer;
  var i:integer;
begin{repeattest}
  i:=0;
  repeat
    A[i]:=i*i;
    i:=i+1
  until i>9;
  i:=0;
  repeat
    writeln;
    write('A['); write(i); write(']='); write(A[i]);
    i:=i+1
  until i>9;
  writeln
end{repeattest}.

