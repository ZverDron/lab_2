from decimal import Decimal
import sqlite3
conn = sqlite3.connect('db.sqlite3')
cursor = conn.cursor()
conn.row_factory = sqlite3.Row
cursor.execute('''SELECT GPSstring FROM practice_GeoData''')
conn.commit()
r = cursor.fetchone()
print(r[0])
data = r[0]
print(data[6])
GPStime=Decimal(a[7:-5])
cursor.execute('''INSERT INTO practice_GeoData(GPStime, GPSx, GPSy) VALUES (?, ?, ?)''',Decimal(a[7:-5], Decimal(a[7:-5], Decimal(a[7:-5]])
#conn.commit()
cursor.close()
