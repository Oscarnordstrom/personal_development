Base *p = &d1; legal

p = &d2;       illegal, user code may use the derived-to-base conversion only if D inherits publicly from B

p = &d3;       illegal, same reason as d2

p = &dd1;      legal

p = &dd2;      illegal, same reason as d2

p = &dd3;      illegal, same reason as d2