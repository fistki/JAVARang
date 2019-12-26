; test.j 
.class public test 
.super java/lang/Object
.field public static _sc Ljava/util/Scanner;
.method public static testFunction1(I)I
.limit stack 100
.limit locals 100
  iload 0
i2f
ldc 0
i2f
fcmpl 
ifeq L1_
 iconst_0 
 goto L2_
 L1_:
 iconst_1 
 L2_:
ifeq Lfalse_1
 iload 0
istore 1
goto Lexit_1
Lfalse_1:
   iload 0
ldc 10
imul
istore 1
Lexit_1:
 iload 1
ireturn
ireturn 
.end method 
.method public static testFunction2(I)I
.limit stack 100
.limit locals 100
 iload 0
istore 1
 ldc 0
istore 2
  Lbegin_3:
iload 2
i2f
ldc 5
i2f
fcmpl 
iflt L1_
 iconst_0 
 goto L2_
 L1_:
 iconst_1 
 L2_:
ifeq Lexit_3
   iload 1
ldc 2
imul
istore 1
  iload 2
ldc 1
iadd
istore 2
goto Lbegin_3 
 Lexit_3:
 iload 1
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
invokestatic test/testFunction1(I)I
invokevirtual java/io/PrintStream/print(I)V 
  getstatic java/lang/System/out Ljava/io/PrintStream; 
ldc "\n"
invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V 
  getstatic java/lang/System/out Ljava/io/PrintStream; 
ldc 1
invokestatic test/testFunction2(I)I
invokevirtual java/io/PrintStream/print(I)V 
return 
.end method