import random
import time
import msvcrt
import os

log=open('log_mergesort.txt','w')#日志

def logprint(content):
    global log
    print(content)
    log.write(content)

def loginput(content):
    global log
    log.write(content)
    result=input(content)
    log.write(result)
    log.write("\n")
    return result
    
def genRandomVector(fileName,dataCount,dataMax):
    outp=open(fileName,'w')
    i = 0
    while i<dataCount:
        mLine="%i\n"%(random.randint(0,dataMax))
        outp.write(mLine)
        i+=1
    outp.close()

if __name__ == "__main__":
    random.seed()
    dataCount=eval(loginput('DataCount:'))#输入数据数量
    dataMax=eval(loginput('NumberMax:'))#输入最大数字
    
    start = time.time()
    genRandomVector('in_mergesort.txt',dataCount,dataMax)
    end = time.time()
    logprint('Test data created!\nUse time:%lf'%(end-start))
    
    os.system('Mergesort.exe')
    logprint('\nPress any key to mergesort it...')
    stinfo=os.stat('out_mergesort.txt')
    logprint('\nMergesorted!\nUse time:%f'%(stinfo.st_mtime - stinfo.st_atime))
    log.close()
    msvcrt.getch();
