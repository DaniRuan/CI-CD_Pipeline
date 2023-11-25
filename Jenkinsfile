pipeline {
    agent any
    //options { timestamps () }
    stages {
        stage('Checkout') {
            steps {
                timestamps{
                git branch: 'main', url: 'https://github.com/DaniRuan/CI-CD_Pipeline.git'
                }
            }
        }
        stage('Build') {
            steps {
                timestamps{
                bat 'echo System testing started...'
                }
            }
        }
        stage('Test') {
            steps {
                timestamps{
                bat 'pio test -vvv'
                //'pio test -d, --project-dir C:\\Users\\danny\\OneDrive\\Documents\\EDAG\\Codes\\Test_hardware'
                }
            }
        }
    }
}
