Private Sub Command1_Click()
Dim c, i, j, szCNLen As Integer
Dim a(6) As Integer
Dim MgcNum(21) As Integer
Dim ssName(50) As Integer

a(0) = "00"
a(1) = "00"
a(2) = "00"
a(3) = "99"
a(4) = "99"
a(5) = "00"

MgcNum(0) = 38: MgcNum(1) = 56
MgcNum(2) = 57: MgcNum(3) = 57
MgcNum(4) = 99: MgcNum(5) = 15
MgcNum(6) = 58: MgcNum(7) = 12
MgcNum(8) = 13: MgcNum(9) = 17
MgcNum(10) = 19: MgcNum(11) = 18
MgcNum(12) = 88: MgcNum(13) = 58
MgcNum(14) = 52: MgcNum(15) = 52
MgcNum(16) = 12: MgcNum(17) = 13
MgcNum(18) = 12: MgcNum(19) = 57
MgcNum(20) = 52: MgcNum(21) = 98

szName = UCase(Trim(txtName.Text))
szCNLen = Len(szName) - 1

i = 0
j = 0

Do While i <= szCNLen
For c = 1 To Len(szName)
ssName(i) = Asc(Mid(szName, c, 1))
If j > 2 Then j = 0
a(j) = (ssName(i) * Len(szName) + a(j)) Mod &H64
If a(j) >= &H64 Then a(j) = a(j) Mod &H64
i = i + 1
j = j + 1
Next
Loop

i = 0
Do While i < 5
a(5) = ((a(5) + a(i) * Len(szName))) Mod &H16
i = i + 1
Loop

a(5) = MgcNum(CInt(a(5)))

If Trim(Len(txtName)) < 3 Then
'MsgBox "Masukkan Nama Lebih Dari 3 Karakter", vbInformation, "Serial Number"
txtKey.Text = "Please input name more than 3 char"
Else
txtKey.Text = a(3) & a(5) & a(4) & a(0) & a(1) & a(2)
End If
End Sub

Private Sub Form_Load()
MsgBox "Created By Operate System", vbInformation, "Info"
End Sub