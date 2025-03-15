import pymysql

def connect_db():
    connection = pymysql.Connect(host='localhost', user='root', password='Root', database='greeshma_db', port=3306, charset='utf8')
    print('Database connected successfully!')
    return connection

def disconnect_db(connection):
    connection.close()
    print('Database dis-connected successfully!')

def create_db():
    query = 'create database IF NOT EXISTS greeshma_db'
connection = connect_db()
disconnect_db(connection)

def readStudentDetails():
    pass

def insert_student():
    pass

def delete_student():
    pass

def update_student():
    pass

def search_student():
    pass

def listAllStudents():
    pass

