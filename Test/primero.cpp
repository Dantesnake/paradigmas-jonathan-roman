clear, clc
x1 = [1, 1, 1, -1];
x1
x2 = [-1, -1, -1, 1];
x2
x1mul = x1(:) * x1(:)';
x1mul

x2mul = x2(:) * x2(:)';
x2mul

w1 = x1mul + x2mul;
w1

w = w1 - diag(diag(w1));
w

% input ( valor a encontrar )
x =  [-1 -1 -1 -1];

% mul  sum(w * x)
u0 = x;
i=0;

while i < 2
  
u0 = u0 * w;
i
u0

    % aplicar funcion de activacion thresold
    for i=1:1:4
      if u0(i) > 0
        u0(i) = 1;
      else
        u0(i) = -1;
     endif
    endfor
    
  if (u0 == x)
      fprintf('encontrado' );
      u0
      % break;  
  endif
   i = i + 1;
   u0

 end