; test.j 
.class public test 
.super java/lang/Object
.field public static _sc Ljava/util/Scanner;
.method public static func2(II)I
.limit stack 100
.limit locals 100
  iload 0
iadd
ireturn
ireturn 
.end method 
.method public static main([Ljava/lang/String;)V
.limit stack 100
.limit locals 100 
new java/util/Scanner 
dup 
getstatic java/lang/System/in Ljava/io/InputStream; 
invokespecial java/util/Scanner/<init>(Ljava/io/InputStream;)V 
putstatic test/_sc Ljava/util/Scanner; 
     getstatic java/lang/System/out Ljava/io/PrintStream; 
ldc 10
ldc 2
ldc 3
invokestatic test/func2(IIIreturn 
.end method