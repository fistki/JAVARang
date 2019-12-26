test;

testFunction1(number1:integer):integer;
begin
    var temp1:integer;

    if(number1 == 0) then
        temp1 = number1;
    else
        temp1 = number1 * 10;
    end if

    return temp1;
end
end testFunction1

testFunction2(number2:integer):integer;
begin
    var temp2:integer;
    var i:integer;


    temp2 = number2;
    i = 0;

    while(i < 5) do
        temp2 = temp2 * 2;
        i = i + 1;
    end do

    return temp2;
end
end testFunction2

begin
    print testFunction1(10);
    print "\n";
    print testFunction2(1);
end

end test