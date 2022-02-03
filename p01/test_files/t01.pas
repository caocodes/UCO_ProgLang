{----------------------------------------------------------------------------}
{File t01.pas contains a sample program to exercise the Subset Pascal Scanner}
{----------------------------------------------------------------------------}
{Author:     Thomas R Turner                                                 }
{E-Mail:     trturner@uco.edu                                                }
{Date:       February, 2020                                                  }
{----------------------------------------------------------------------------}
program p00;
  var c:real;
begin{p00}
  write('How much cash do you have? $');
  readln(c);
  if (0.0 <= c) and (c <= 10.0) then
    writeln('Why, you are a pauper, I''d never go out with you.')
  else 
    writeln('Hey handsome, let''s have a good time tonight!');
end{p00}.
