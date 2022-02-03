program example(input, output);
	var x,y:integer;
	function gcd(a,b:integer):integer;
	begin{gcd}
		if b=0 then gcd:=a
		else gcd:=gcd(b,a mod v)
	end{gcd};
begin{example}
	readln(x,y);
	write(gcd(x,y))
end{example}.