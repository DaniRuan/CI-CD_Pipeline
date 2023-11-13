pipeline {
    agent any

    //environment {
    //    PLATFORMIO_HOME = 'C:\\Users\\danny\\OneDrive\\Documents\\PlatformIO\\Projects\\Test_hardware'
    //}

    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/DaniRuan/CI-CD_Pipeline.git'
                //checkout([$class: 'Git', branches: [[name: '*/main']], userRemoteConfigs: [[url: 'https://github.com/DaniRuan/CI-CD_Pipeline.git']]])
            }
        }
        stage('Build') {
            steps {
                bat 'pio run -v'
            }
        }
        stage('Flash') {
            steps {
                bat 'avrdude -c usbasp -p m328p -P COM3 -U flash:w:.pioenvs\\uno\\firmware.hex'
            }
        }
        stage('Test') {
            steps {
                bat 'pio test -v'
            }
        }
    }
}
