use QLBHang
create table KhachHang(
MaKH char(10) primary key NOT NULL,
Hoten nvarchar(30),
Diachi nvarchar(50),
SDT char(10) check(isnumeric(SDT)=1),
);
create table HoaDon(
SoHD int primary key not null,
ngaylapHD date check(ngaylapHD<getdate()),
ngayBH date check(ngayBH<getdate()),
MaKH char(10) foreign key references KhachHang(MaKH),
);
create table NhomHang(
MaNH int primary key not null,
tenNH nvarchar(30),
);
create table MatHang(
MaMH char(10) primary key not null,
tenMH nvarchar(50),
DonGia money,
DVT char(10),
MaNH int foreign key references NhomHang(MaNH),
);
create table HD_MH(
SoHD int foreign key references HoaDon(SoHD),
MaMH char(10) foreign key references MatHang(MaMH),
SLBan int check(SLBan>0),
);
insert into KhachHang values
('KH01',N'Lê Thị Lan', N'Đà Nẵng', '027533810'),
('KH02',N'Lê Thị Na Ní', N'Thanh Khê', '027533810'),
('KH03',N'Lê Thị Hoa', N'Hà Nội', '027533810'),
('KH04',N'Lê Thị Lý', N'Thanh Hóa', '027533810'),
('KH05',N'Lê Thị Dy', N'Hải Châu', '027533810');
insert into KhachHang values
('KH06',N'Lê Thị Dy', N'Hải Châu', '027533810'),
('KH07',N'Lê Thị Dy', N'Hải Châu', '027533810');
insert into HoaDon values 
(1,'2019/03/24','2019/06/25','KH03'),
(2,'2018/05/23','2019/06/26','KH01'),
(3,'2016/03/14','2018/06/27','KH02'),
(4,'2019/03/15','2019/06/28','KH04'),
(5,'2019/03/24','2017/06/25','KH03');
insert into HoaDon values 
(8,'2019/03/24','2017/06/25','KH04'),
(9,'2019/03/24','2017/06/25','KH05'),
(6,'2019/03/24','2017/06/25','KH03'),
(7,'2019/03/24','2017/06/25','KH03');
insert into NhomHang values
(11,N'Quần'),
(12,N'Áo');
insert into MatHang values
('MH01',N'Áo Phông', 150000,'VND',11),
('MH02',N'Áo Croptop', 180000,'VND',11),
('MH03',N'Áo Sơ Mi', 280000,'VND',11),
('MH04',N'Quần Baggy', 250000,'VND',12),
('MH05',N'Quần Jeans', 230000,'VND',12);
insert into MatHang values ('MH06',N'Quần Jeans', 230000,'VND',12),
('MH07',N'Quần Jeans', 230000,'VND',12);
insert into HD_MH values
(2,'MH03',2),
(3,'MH02',4),
(4,'MH04',3),
(1,'MH05',2),
(5,'MH02',5);
select top 2 * from KhachHang
select top 50 percent * from KhachHang
select top 50 percent *  into LALA from KhachHang
select * from KhachHang where MaKH='KH01'
select * from LALA
select * from KhachHang where Hoten like N'Lê%'
select * from MatHang where DonGia>250000 and MaNH='11'
select * from HoaDon where  YEAR(ngayBH)=2018
select * from HoaDon where ngayBH=GETDATE()
select * from HoaDon where YEAR(ngayBH)=2018 and MONTH(ngayBH)=06
select tenNH, tenMH, DonGia from MatHang, NhomHang where MatHang.MaNH=NhomHang.MaNH and tenNH=N'Quần'
select SoHD, ngaylapHD, ngayBH, Hoten, Diachi, SDT from HoaDon, KhachHang where KhachHang.MaKH=HoaDon.MaKH\
/* */
select Hoten, ngayBH, tenMH, DonGia, SLBan, KhachHang.MaKH from KhachHang, HoaDon, HD_MH, MatHang
where (KhachHang.MaKH=HoaDon.MaKH) and (MatHang.MaMH=HD_MH.MaMH) and (HoaDon.SoHD=HD_MH.SoHD)
/* */
select HoaDon.SoHD, MatHang.MaMH, tenMH, DonGia, SLBan, SLBan*DonGia as ThanhTien from HoaDon, MatHang, HD_MH 
where (HD_MH.SoHD=HD_MH.SoHD) and (HD_MH.MaMH=MatHang.MaMH)
select COUNT(MaNH) from NhomHang
select SUM(SLBan*DonGia) as Tong from HD_MH, MatHang where HD_MH.MaMH=MatHang.MaMH
select COUNT(ngaylapHD) as tong from HoaDon where ngaylapHD=GETDATE()
/* Hiển Thị Thông Tin Khách hàng tăng dần theo tên */
select * from KhachHang order by Hoten asc
/*Cho biết mặt hàng thuộc nhóm quần được bán vào ngày hôm qua*/
select Hoten, tenNH from KhachHang k, HoaDon H, MatHang M, NhomHang N, HD_MH C 
where k.MaKH=H.MaKH and H.SoHD=C.SoHD and M.MaMH=C.MaMH and N.MaNH=M.MaNH  and tenNH=N'Quần' and H.ngayBH=(GETDATE()-1);
--hiển thị thông tin mặt hàng của nhóm hàng quần
select M.tenMH, M.DonGia from MatHang M, NhomHang N  where M.MaNH=N.MaNH and N.tenNH=N'Quần'
--tính tổng tiền thành tiền của từng hóa đơn
select sum(SLBan*DonGia) as tong into lili from MatHang, HD_MH 
where  MatHang.MaMH=HD_MH.MaMH 
group by HD_MH.SoHD
--tìm hóa đơn có tổng tiền> 500000
select sum(SLBan*DonGia) as tong from MatHang, HD_MH 
where  MatHang.MaMH=HD_MH.MaMH 
group by HD_MH.SoHD
having sum(SLBan*DonGia)>500000
--chú ý câu 25: mệnh đề having dùng để lọc điều kiện khi hệ thống đã group by. trên where khi sử dụng điều kiện lọc thì ko đc sử dụng hàm thống kê.
--câu 26: tìm những khách hàng có lượt mua hàng nhiều nhất
select  K.MaKH ,Hoten, COUNT(H.SoHD) as tong into hum from KhachHang K, HoaDon H 
where K.MaKH=H.MaKH
group by Hoten, K.MaKH
select MaKH, Hoten, max(tong) from hum group by MaKH, Hoten
-- tìm những hóa đơn được lập năm 2015-2018
select * from HoaDon where YEAR(ngaylapHD) >=2015 and YEAR(ngaylapHD)<=2018
--tìm ra khách hàng chưa bh mua hàng
select Hoten, MaKH from KhachHang
where NOT EXISTS (select DISTINCT MaKH from HoaDon where KhachHang.MaKH=HoaDon.MaKH)
--note: dùng từ khóa DISTINCT để loại bỏ dữ liệu trùng lặp
--tìm mặt hàng bán chạy nhất
select top 1 MatHang.tenMH, sum (SLBan) from MatHang, HD_MH
where MatHang.MaMH=HD_MH.MaMH
group by MatHang.tenMH
-- tìm những mặt hàng chưa bao giờ bán
select MatHang.MaMH, MatHang.tenMH from MatHang
where MAMH not in (SELECT MaMH from HD_MH where MatHang.MaMH=HD_MH.MaMH)
--tìm những hóa đơn có ngày lập hóa đơn với KH03
select * from HoaDon where MaKH='KH03'
select HoaDon.SoHD, HoaDon.ngaylapHD from HoaDon
where ngaylapHD in  (select ngaylapHD from HoaDon where MaKH = 'KH03' )
-- tìm những mặt hàng có số lượng bán bình quân  > mặt hàng MH01 trong tháng 8 năm 2019
select MatHang.tenMH, avg(SLBan) from MatHang, HD_MH, HoaDon
where MatHang.MaMH=HD_MH.MaMH and HD_MH.SoHD=HoaDon.SoHD
and YEAR(ngayBH)=2019 and MONTH(ngayBH)=08
group by MatHang.tenMH
having AVG(SLBan)>
(select SLBan from HD_MH, MatHang, HoaDon where MatHang.MaMH='MH01' and YEAR(ngayBH)=2019 and MONTH(ngayBH)=08)
-- tìm những mặt hàng có đơn giá lớn hơn mặt hàng có mã MH01
select MatHang.tenMH, MatHang.DonGia from MatHang where DonGia > (select DonGia from MatHang where MaMH='MH01')
--trong bảng KH cho thêm trường ngày sinh. update dữ liệu cho trường ngày sinh
alter table KhachHang add ngaysinh date
update KhachHang set ngaysinh= ('2000/04/26') where MaKH='KH01'
update KhachHang set ngaysinh=('1990/04/04') where MaKH='KH02'
update KhachHang set ngaysinh=('1998/05/05') where MaKH='KH03'
update KhachHang set ngaysinh=('2002/15/10') where MaKH='KH04'
update KhachHang set ngaysinh=('2003/05/29') where MaKH='KH05'
update KhachHang set ngaysinh=('1997/05/03') where MaKH='KH06'
update KhachHang set ngaysinh=('1895/05/29') where MaKH='KH07'
insert into KhachHang values 
('KH08',N'Lê Thị My', N'Đà Nẵng', '027533810', '1889/04/28'),
('KH09',N'Lê Thị Lam', N'Quảng Nam', '027533810', '2000/05/26');
-- cho biết họ tên của khách hàng ở ĐN sinh trước hết tất cả khách hàng ở quảng nam
select KhachHang.Hoten, KhachHang.Diachi from KhachHang 
where ngaysinh